#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define CALIBRATION_LIFECAM_VIDEO 0

#include <QMainWindow>
#include <iostream>
#include <iomanip>
#include <QtDebug>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>
#include <QFileDialog>

#include "opencv2/opencv.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startProcessBtn_clicked();

private:
    Ui::MainWindow *ui;

    QGraphicsPixmapItem pixMapCam;

    cv::VideoCapture video;
};

#endif // MAINWINDOW_H
