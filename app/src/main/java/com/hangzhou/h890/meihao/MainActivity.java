package com.hangzhou.h890.meihao;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import com.hangzhou.h890.meihao.utils.MyNdk;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
      TextView textView= (TextView) findViewById(R.id.tv_look);
      textView.setText(MyNdk.getInstance().getSecretA());
    }
}
