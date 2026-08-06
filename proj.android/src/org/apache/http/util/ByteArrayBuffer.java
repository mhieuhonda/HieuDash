// Stub for org.apache.http.util.ByteArrayBuffer
// Apache HTTP was removed from the Android SDK in API 28+, but the
// decompiled BaseRobTopActivity still references it. This stub provides
// the constructor + append()/toByteArray() methods used.
package org.apache.http.util;

public class ByteArrayBuffer {
    private byte[] buffer;
    private int    len;

    public ByteArrayBuffer(int capacity) {
        this.buffer = new byte[capacity];
        this.len    = 0;
    }

    public void append(byte b) {
        if (len == buffer.length) {
            byte[] newBuffer = new byte[buffer.length * 2 + 1];
            System.arraycopy(buffer, 0, newBuffer, 0, len);
            buffer = newBuffer;
        }
        buffer[len++] = b;
    }

    public void append(int b) {
        append((byte) b);
    }

    public void append(byte[] b, int off, int count) {
        if (b == null) return;
        if (off < 0 || off > b.length || count < 0 || off + count > b.length) {
            throw new IndexOutOfBoundsException();
        }
        ensureCapacity(count);
        System.arraycopy(b, off, buffer, len, count);
        len += count;
    }

    public byte[] toByteArray() {
        byte[] result = new byte[len];
        System.arraycopy(buffer, 0, result, 0, len);
        return result;
    }

    public int byteAt(int i) {
        return buffer[i];
    }

    public int capacity() {
        return buffer.length;
    }

    public int length() {
        return len;
    }

    public void setLength(int len) {
        if (len < 0 || len > buffer.length) {
            throw new IndexOutOfBoundsException();
        }
        this.len = len;
    }

    public boolean isEmpty() {
        return len == 0;
    }

    public boolean isFull() {
        return len == buffer.length;
    }

    public void clear() {
        len = 0;
    }

    private void ensureCapacity(int required) {
        if (required <= 0) return;
        int available = buffer.length - len;
        if (available >= required) return;
        int newCapacity = Math.max(buffer.length * 2, len + required);
        byte[] newBuffer = new byte[newCapacity];
        System.arraycopy(buffer, 0, newBuffer, 0, len);
        buffer = newBuffer;
    }
}
