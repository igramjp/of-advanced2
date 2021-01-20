#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    light.setSpotlight();
    light.setPosition(-400, 400, 800);
    light.enable();
    // マテリアルを設定
    material.setAmbientColor(ofColor(127, 63, 31));
    material.setDiffuseColor(ofColor(0, 127, 255));
    material.setSpecularColor(ofColor(255, 255, 0, 255));
    material.setShininess(120);
    material.setEmissiveColor(ofColor(97, 0, 0));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableDepthTest(); // 深度テストを有効に
    material.begin();
    camera.begin();
    ofSetColor(31, 127, 255);
    // 画面の中心に原点を移動
    // ofTranslate(ofGetWidth()/2, ofGetHeight()/2); // ofEasyCamを使用する場合は座標の原点が (0, 0) から画面の中央に移動する為削除する
    // 立方体を描写
    box.set(200); // 幅，高さ，奥行きを200ピクセルに
    box.setPosition(-120, 0, 0); // 位置を設定
    // box.drawWireframe(); // ワイヤーフレームで描写
    box.draw();
    // 球を描写
    sphere.set(100, 32); // 半径100ピクセル，分割数8に
    sphere.setPosition(120, 0, 0); // 位置を設定
    // sphere.drawWireframe(); // ワイヤーフレームで描写
    sphere.draw();
    camera.end();
    material.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
