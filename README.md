# Remote Control Server for ofxPiMapper (OSC Variant)

This example demonstrates an OSC server for ofxPiMapper remote control. The other part of this can be any OSC client (in its simplest form, use `oscsend` from the `liblo` package`. 

What this server does is the following:

- It creates a `ofxOscReceiver`.
- Waits for messages.
- Sends ofxPiMapper configuration once client is connected.
- Accepts keyboard and mouse events from client after.
- Forwards events to ofxPiMapper instance.

In a real-world scenario, the server should reside on the Raspberry Pi side of your installation. The Raspberry Pi should be connected to wired or wireless network. An IP address should be set. 

The client should know the following.

- The **IP address** of the Raspberry Pi with the server.
- The port, which is **9999** in this case.

## Downloads

[ofxOscPiMapper rpi2+ (binary only)](https://objekte.rationalraum.de/minio/download/exchange/ofxOscPiMapper?token=eyJhbGciOiJIUzUxMiIsInR5cCI6IkpXVCJ9.eyJleHAiOjE1NDEzNTA5ODksInN1YiI6IlRYTDdYTTVHMUpaWEtSV0c5QzdJIn0.S55eq5MfgTpx_jIoXXysE9gYemmI1SKdyunpzn4X8u-scKBXoeI1d_tZXbgPFiB7fTpY4s4p4xr-FLPXpwx-PQ)

[ofxOscPiMapper rpi2+ (inc. openFrameworks)](https://objekte.rationalraum.de/minio/download/exchange/ofxOscPiMapper-rpi2.tar.gz?token=eyJhbGciOiJIUzUxMiIsInR5cCI6IkpXVCJ9.eyJleHAiOjE1NDEzNTEwNTksInN1YiI6IlRYTDdYTTVHMUpaWEtSV0c5QzdJIn0.I734hVUNFLgOWM-Sm_8k-2VIeRMDwfdNV8fz0SMuIBz-KSFd8t_LIvFhztLF__i8uLDSb3RKcmnSM5TerwHGmA)