# TrafficLights-DeepLearning-iOS
Detect Traffic Lights

## Get started  

Clone the project (recursivly) to get Caffe as well:

Fetch OpenCV2 and our model file by running the script:
```
./download_dependencies.sh
```
Open the XCode project and run it

## DIGITS Models
Using your own model is simple. Simply replace the files under the model directory with the ones your downloaded from DIGITS

## Some Tips Before Trying It Yourself
* I recommend you to install it on a Ubuntu 14.04 machine without any virtualization (e.g. Docker/VirtualBox).

* Under normal project setup, the optimization flag for your DEBUG build setting is set to None. This will cause the prediction code to run significantly slower than your production build. If you are testing your applications performance, make sure you change the optimization flag to Fastest [-Os]. On my iPhone device I experienced a X3 performance increase.
