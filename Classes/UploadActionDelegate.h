
#ifndef UPLOADACTIONDELEGATE_H_
#define UPLOADACTIONDELEGATE_H_

class UploadActionDelegate {
public:
    void uploadActionFailed(int, int);
    void uploadActionFinished(int, int);

};

#endif // UPLOADACTIONDELEGATE_H_
