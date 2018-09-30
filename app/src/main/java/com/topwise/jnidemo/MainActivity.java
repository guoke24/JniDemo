package com.topwise.jnidemo;

import android.os.Bundle;
import android.util.Log;
import android.view.View;

public class MainActivity extends BaseTestActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void test_1(View c){
        Log.d("guohao",MyJni.get());
    }
}
