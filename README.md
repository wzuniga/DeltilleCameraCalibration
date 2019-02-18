# Deltille Camera Calibration
Camera calibration using Deltille Pattern

## Guide to Run
### Compile

```
g++ deltille_main.cpp -o CameraCalibration -O3 `pkg-config opencv --cflags --libs` && ./CameraCalibration
```

### Execute

```
./CameraCalibration
```

### Prerequisites

```
sudo apt-get install libopencv-dev
```

## Results

This is the initial interface of the project, it shows the camera and the window for the correct distribution of the pattern in it.

![First Attemp]url completa de la imagen)(https://github.com/wzuniga/DeltilleCameraCalibration/blob/master/Imagenes/At1.png)

After having obtained the inficado frames, we proceed to the calibration with the Ankur method, iteratively refining the points to obtain a better calibration, having a final RMS of 0.163, in our experiments this is the number reached.

![First Attemp]url completa de la imagen)(https://github.com/wzuniga/DeltilleCameraCalibration/blob/master/Imagenes/At2.png)

In the Fronto Parallel window, an initial pattern is initially displayed in which it is displayed if the pattern was found in a frame or not.

![First Attemp]url completa de la imagen)(https://github.com/wzuniga/DeltilleCameraCalibration/blob/master/Imagenes/Pattern.png)

In fronto Parallel of the initial state you can see if the pattern and the order of it are correctly followed.

![First Attemp]url completa de la imagen)(https://github.com/wzuniga/DeltilleCameraCalibration/blob/master/Imagenes/Fronto.png)

This is the initial distribution window, it will go through different divisions to ensure that it is distributed correctly.

![First Attemp]url completa de la imagen)(https://github.com/wzuniga/DeltilleCameraCalibration/blob/master/Imagenes/DistBl.png)

In the final distribution we can see how the pattern has moved through the image, in the circles they are the places where the frames are better defined.

![First Attemp]url completa de la imagen)(https://github.com/wzuniga/DeltilleCameraCalibration/blob/master/Imagenes/Dist All.png)
