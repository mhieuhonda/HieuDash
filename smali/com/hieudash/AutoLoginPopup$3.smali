.class Lcom/hieudash/AutoLoginPopup$3;
.super Ljava/lang/Object;
.source "AutoLoginPopup.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic this$0:Lcom/hieudash/AutoLoginPopup;


# direct methods
.method constructor <init>(Lcom/hieudash/AutoLoginPopup;)V
    .locals 0

    iput-object p1, p0, Lcom/hieudash/AutoLoginPopup$3;->this$0:Lcom/hieudash/AutoLoginPopup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 10

    :try_start_all
    # Step 1: Hash the password
    const-string v0, "jinxgg123"

    invoke-static {v0}, Lcom/hieudash/AutoLoginPopup;->hashPassword(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    # Step 2: Get device UDID
    iget-object v0, p0, Lcom/hieudash/AutoLoginPopup$3;->this$0:Lcom/hieudash/AutoLoginPopup;

    invoke-virtual {v0}, Lcom/hieudash/AutoLoginPopup;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/hieudash/AutoLoginPopup;->getUdid(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    # Step 3: Build POST data
    # gameVersion=22&binaryVersion=41&secret=Wmfd2893gb7&udid=<udid>&userName=HieuLouis&password=<hashed>
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "gameVersion=22&binaryVersion=41&secret=Wmfd2893gb7&udid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, "&userName=HieuLouis&password="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    # Step 4: Send HTTPS POST request (use HTTPS to avoid cleartext block on Android 9+)
    const-string v0, "https://www.boomlings.com/database/accounts/loginGJAccount.php"

    new-instance v1, Ljava/net/URL;

    invoke-direct {v1, v0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v0

    check-cast v0, Ljava/net/HttpURLConnection;

    # Set up connection
    const-string v1, "POST"

    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    # Set connection timeout (10000ms = 10s)
    const v1, 0x2710

    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    # Set read timeout (15000ms = 15s)
    const v1, 0x3a98

    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    # Set Content-Type
    const-string v1, "Content-Type"

    const-string v2, "application/x-www-form-urlencoded"

    invoke-virtual {v0, v1, v2}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    # Set User-Agent to mimic GD client
    const-string v1, "User-Agent"

    const-string v2, "GeometryDash/2.2 Android/41"

    invoke-virtual {v0, v1, v2}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    # Write POST data
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v1

    const-string v2, "UTF-8"

    invoke-virtual {v8, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/io/OutputStream;->write([B)V

    invoke-virtual {v1}, Ljava/io/OutputStream;->flush()V

    invoke-virtual {v1}, Ljava/io/OutputStream;->close()V

    # Read response
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/InputStreamReader;

    invoke-direct {v3, v1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    :read_loop
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :read_done

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :read_loop

    :read_done
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    invoke-virtual {v1}, Ljava/io/InputStream;->close()V

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    # Step 5: Parse response
    # RobTop login response format: "accountId,userId" on success, "-1" on failure
    const-string v0, "-1"

    invoke-virtual {v9, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_check_more_errors

    # Login failed: -1
    const-string v0, "Failed"

    invoke-static {v0}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/hieudash/AutoLoginPopup$3;->showToast(Ljava/lang/String;)V

    goto :goto_end

    :cond_check_more_errors
    # Check for other error codes
    const-string v0, "-"

    invoke-virtual {v9, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_parse_success

    # Error response
    const-string v0, "Error"

    invoke-static {v0}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/hieudash/AutoLoginPopup$3;->showToast(Ljava/lang/String;)V

    goto :goto_end

    :cond_parse_success
    # Parse accountId and userId from response "accountId,userId"
    const-string v0, ","

    invoke-virtual {v9, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x2

    if-lt v1, v2, :cond_parse_fail

    # Get accountId and userId
    const/4 v1, 0x0

    aget-object v1, v0, v1

    const/4 v2, 0x1

    aget-object v2, v0, v2

    # Compute GJP from hashed password (XOR with 11 + Base64)
    invoke-static {v5}, Lcom/hieudash/AdminAPI;->computeGjp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    # Save: context, "HieuLouis", hashedPassword, accountId, userId, gjp, udid
    const-string v3, "HieuLouis"

    invoke-static {v6, v3, v5, v1, v2, v8, v7}, Lcom/hieudash/AutoLoginPopup;->saveCredentials(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    # Show success toast
    const-string v0, "Success"

    invoke-static {v0}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/hieudash/AutoLoginPopup$3;->showToast(Ljava/lang/String;)V

    goto :goto_end

    :cond_parse_fail
    const-string v0, "Error"

    invoke-static {v0}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/hieudash/AutoLoginPopup$3;->showToast(Ljava/lang/String;)V

    goto :goto_end

    :try_end_all
    .catch Ljava/lang/Exception; {:try_start_all .. :try_end_all} :catch_exception

    :catch_exception
    move-exception v0

    # Show error toast
    const-string v0, "Error"

    invoke-static {v0}, Lcom/hieudash/LanguageManager;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/hieudash/AutoLoginPopup$3;->showToast(Ljava/lang/String;)V

    :goto_end
    return-void
.end method

# Helper method to show toast on UI thread
.method private showToast(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/hieudash/AutoLoginPopup$3;->this$0:Lcom/hieudash/AutoLoginPopup;

    invoke-virtual {v0}, Lcom/hieudash/AutoLoginPopup;->getHandler()Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/hieudash/AutoLoginPopup$3$1;

    invoke-direct {v1, p0, p1}, Lcom/hieudash/AutoLoginPopup$3$1;-><init>(Lcom/hieudash/AutoLoginPopup$3;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
