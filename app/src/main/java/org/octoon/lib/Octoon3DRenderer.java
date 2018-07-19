package org.octoon.lib;

public class Octoon3DRenderer {
    static {
        System.loadLibrary("octoon");
    }

    public native String nativeConfig();
}
