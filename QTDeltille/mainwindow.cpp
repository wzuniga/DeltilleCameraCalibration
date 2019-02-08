#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startProcessBtn_clicked()
{
    video = cv::VideoCapture(CALIBRATION_LIFECAM_VIDEO);
    if ( !video.isOpened() ) {
        std::cout << "Cannot open the video file. \n";
        return;
    }
    cv::Mat frame;
    while(true){
        video>>frame;
        if(!frame.empty()){
            QImage imageCamQI(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
            pixMapCam.setPixmap(QPixmap::fromImage(imageCamQI.rgbSwapped()));
            ui->imageCameraQg->fitInView(&pixMapCam, Qt::KeepAspectRatio);
        }
    }

    cv::waitKey(0);
}
