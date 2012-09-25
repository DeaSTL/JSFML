#include <JSFML/JNI/org_jsfml_graphics_CircleShape.h>

#include <JSFML/Intercom/NativeObject.hpp>

#include <JSFML/JNI/org_jsfml_ExPtr.h>

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

/*
 * Class:     org_jsfml_graphics_CircleShape
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_CircleShape_nativeCreate (JNIEnv *env, jobject obj) {
    return (jlong)new sf::CircleShape();
}

/*
 * Class:     org_jsfml_graphics_CircleShape
 * Method:    nativeSetExPtr
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_CircleShape_nativeSetExPtr (JNIEnv *env, jobject obj) {
    JSFML::NativeObject::SetExPointer(env, obj, org_jsfml_ExPtr_DRAWABLE,
        dynamic_cast<sf::Drawable*>(THIS(sf::CircleShape)));

    JSFML::NativeObject::SetExPointer(env, obj, org_jsfml_ExPtr_TRANSFORMABLE,
        dynamic_cast<sf::Transformable*>(THIS(sf::CircleShape)));

    JSFML::NativeObject::SetExPointer(env, obj, org_jsfml_ExPtr_SHAPE,
        dynamic_cast<sf::Shape*>(THIS(sf::CircleShape)));
}

/*
 * Class:     org_jsfml_graphics_CircleShape
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_CircleShape_nativeDelete (JNIEnv *env, jobject obj) {
    delete THIS(sf::CircleShape);
}

/*
 * Class:     org_jsfml_graphics_CircleShape
 * Method:    setRadius
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_CircleShape_setRadius
    (JNIEnv *env, jobject obj, jfloat radius) {

    THIS(sf::CircleShape)->setRadius(radius);
}

/*
 * Class:     org_jsfml_graphics_CircleShape
 * Method:    getRadius
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_graphics_CircleShape_getRadius (JNIEnv *env, jobject obj) {
    return THIS(sf::CircleShape)->getRadius();
}

/*
 * Class:     org_jsfml_graphics_CircleShape
 * Method:    setPointCount
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_CircleShape_setPointCount
    (JNIEnv *env, jobject obj, jint count) {

    THIS(sf::CircleShape)->setPointCount(count);
}
