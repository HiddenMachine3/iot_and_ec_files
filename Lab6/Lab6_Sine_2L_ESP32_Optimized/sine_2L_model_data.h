#ifndef LAB6_SINE_2L_ESP32_OPTIMIZED/SINE_2L_MODEL_DATA_H
#define LAB6_SINE_2L_ESP32_OPTIMIZED/SINE_2L_MODEL_DATA_H

/*
 Author: Mouli Sankaran 
 CAUTION: This is an auto generated file.
 DO NOT EDIT OR MAKE ANY CHANGES TO IT.
 This model data was generated on Wed Sep 18 12:06:39 2024

 Tools used:
 Python:3.11.5 | packaged by Anaconda, Inc. | (main, Sep 11 2023, 13:26:23) [MSC v.1916 64 bit (AMD64)]
 Numpy:1.24.3
 TensorFlow:3.11.5 | packaged by Anaconda, Inc. | (main, Sep 11 2023, 13:26:23) [MSC v.1916 64 bit (AMD64)]
 Keras: 3.5.0

 Model details are:
 NUM_OF_EPOCHS = 900
 BATCH_SIZE    = 16
*/


const int DENSE1_SIZE = 16;
const int DENSE2_SIZE = 16;

float W1_data[] = {
    -0.234780f, -0.424556f, -0.572493f, -0.152796f, -0.132421f, 0.488388f, 0.178553f, -0.410655f, -0.157928f, 0.263975f, -0.360411f, 0.387979f, -0.378506f, 0.223934f, -0.108469f, -0.111382f
};

float b1_data[] = {
    0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, -0.479365f, -0.368383f, 0.000000f, 0.000000f, -0.638026f, 0.000000f, 0.514736f, 0.000000f, -0.007473f, 0.000000f, 0.689246f
};

float W2_data[] = {
    0.393427f, 0.332305f, -0.019431f, -0.091621f, 0.140266f, -0.057371f, 0.392010f, -0.314431f, 0.228553f, -0.241164f, 0.075457f, 0.301234f, 0.089382f, -0.346929f, -0.193223f, -0.100331f, 0.152212f, 0.068223f, 0.417037f, -0.294540f, 0.184192f, 0.253017f, 0.325582f, 0.019001f, 0.281017f, 0.157782f, 0.266087f, -0.215180f, -0.389261f, 0.302623f, 0.319807f, 0.078924f, -0.200482f, -0.306345f, -0.080729f, -0.362821f, -0.249924f, -0.407760f, -0.047797f, -0.274740f, 0.285326f, 0.097302f, -0.236431f, -0.268503f, 0.404700f, -0.340713f, 0.322978f, -0.356470f, -0.389870f, -0.080218f, 0.383828f, 0.256892f, 0.116058f, 0.085281f, 0.168759f, -0.133777f, -0.362561f, 0.155893f, 0.354293f, 0.236877f, 0.164203f, 0.187659f, 0.385983f, -0.242149f, -0.305666f, -0.264186f, -0.008924f, 0.243120f, -0.016838f, 0.357704f, 0.251761f, -0.138141f, 0.072105f, -0.008763f, -0.182981f, -0.046120f, -0.265204f, -0.178603f, -0.390315f, -0.292714f, -0.105459f, 0.394269f, -0.240967f, 0.506379f, -0.303394f, 0.525877f, 0.381348f, 0.153903f, -0.266212f, -0.078432f, 0.029252f, 0.318403f, 0.524289f, 0.357094f, -0.672314f, 0.002520f, -0.265669f, 0.281635f, -0.076526f, -0.158226f, -0.116341f, -0.115937f, -0.180084f, 0.202673f, -0.699228f, 0.104276f, 0.268082f, 0.265217f, 0.421987f, 0.369097f, -0.274092f, -0.295100f, -0.024256f, 0.187402f, -0.049152f, 0.422051f, 0.129608f, 0.103217f, 0.389671f, 0.389961f, 0.184970f, -0.409579f, -0.207346f, 0.195296f, 0.420528f, 0.081453f, 0.379849f, 0.408022f, 0.383415f, 0.346704f, -0.190762f, -0.145193f, -0.203431f, 0.203868f, 0.242766f, 0.227201f, -0.368892f, 0.001729f, -0.148835f, 0.409508f, 0.235447f, 0.196504f, -0.025134f, 0.354118f, 0.269008f, -0.251470f, -0.360468f, 0.363779f, -0.181940f, 0.499611f, -0.383541f, 0.036802f, -1.068912f, 0.375281f, -0.344139f, 0.031343f, 0.242924f, 0.143642f, 0.231441f, -0.333626f, -0.241877f, 0.111130f, -0.135491f, 0.120823f, -0.422154f, 0.330670f, 0.413107f, 0.268412f, -0.397248f, -0.251275f, -0.253198f, -0.379803f, 0.310322f, 0.042912f, -0.121317f, 0.187602f, 0.092167f, -0.151732f, -0.183962f, -1.161720f, 0.204452f, -0.346499f, -0.236437f, 0.324658f, 0.151553f, -0.053548f, 0.298127f, -0.134035f, -0.098884f, -0.338502f, 0.204429f, 0.034108f, -0.423149f, -0.223910f, -0.146092f, 0.429765f, -0.136918f, 0.276629f, -0.400154f, -0.172322f, 0.065370f, 0.256308f, -0.313610f, 0.186784f, -0.171398f, -0.362199f, 0.342333f, 0.154971f, 0.425598f, 0.239389f, 0.430236f, -0.587413f, 0.286958f, 0.364057f, -0.408848f, -0.130226f, 0.387555f, 0.123666f, -0.141560f, 0.293465f, -0.040954f, 0.288078f, -0.318144f, 0.487502f, 0.025090f, -0.320235f, -0.144845f, -0.062167f, 0.413073f, 0.107803f, 0.354479f, -0.362357f, -0.325356f, -0.392087f, 0.093045f, -0.116978f, -0.261163f, 0.375238f, -0.026283f, -0.110805f, 0.054234f, 0.366149f, -0.333388f, 1.055829f, -0.250608f, -0.260369f, 0.175298f, -0.297717f, 0.381523f, 0.233188f, 0.116149f, -0.492766f, -0.723652f, -0.651319f, -0.070490f, -0.054545f
};

float b2_data[] = {
    -0.007826f, 0.145777f, 0.000000f, 0.819346f, -0.022535f, -0.560111f, -0.067804f, 0.124123f, 0.657782f, -0.249059f, 0.162942f, 0.126639f, -0.522614f, -0.537473f, -0.078346f, 0.111962f
};

float W3_data[] = {
    -0.174358f, -0.303793f, -0.297823f, -1.202533f, -0.324140f, 0.845551f, 0.234725f, -0.252751f, 1.724339f, 0.005660f, -0.322339f, -0.311879f, 0.818989f, 1.672202f, 0.392867f, -0.615995f
};

float b3_data[] = {
    -0.223787f
};

#endif //LAB6_SINE_2L_ESP32_OPTIMIZED/SINE_2L_MODEL_DATA_H