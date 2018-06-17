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


