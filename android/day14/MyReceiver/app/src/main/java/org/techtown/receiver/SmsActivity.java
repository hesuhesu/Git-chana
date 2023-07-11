package org.techtown.receiver;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;

public class SmsActivity extends AppCompatActivity {
    TextView textview2;
    TextView textview3;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_sms);

        textview2 = findViewById(R.id.textView2);
        textview3 = findViewById(R.id.textView3);

        Intent intent = getIntent();
        processIntent(intent);
    }

    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);

        processIntent(intent);
    }

    public void processIntent(Intent intent){
        if (intent != null){
            String sender = intent.getStringExtra("sender");
            String contents = intent.getStringExtra("contents");

            textview2.setText(sender);
            textview3.setText(contents);
        }
    }
}