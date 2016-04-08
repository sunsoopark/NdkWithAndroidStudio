package com.example.sunsoo.ndktest;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;


public class MainActivity extends Activity {
    static {
        System.loadLibrary("ndkTest");
    }
    public native String getString();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView text = (TextView)findViewById(R.id.testview);
        text.setText(getString());
    }
}
