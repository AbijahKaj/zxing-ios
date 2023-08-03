# zxing-ios

ZXing iOS Framework/Package, taken from here: [https://github.com/zxing-cpp/zxing-cpp/tree/master/wrappers/ios](https://github.com/zxing-cpp/zxing-cpp/tree/master/wrappers/ios)

ZXing ("zebra crossing") is an open-source, multi-format linear/matrix barcode image processing library implemented in C++.

# ZXingCpp iOS Framework

To use the iOS (wrapper) framework in other apps, it is easiest
to build the library project and include the resulting xcframework
file in your app.

## How to build and use

To build the xcframework:

	$ ./build-release.sh
    
Then you can add the iOS Wrapper as a local Swift Package by adding it as a dependency to your app.
Don't forget to add the wrapper to the `Frameworks, Libraries, and Embedded Content` section within the `General` tab.
