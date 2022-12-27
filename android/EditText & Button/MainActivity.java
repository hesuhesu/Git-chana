package com.example.tutorial_1;

import android.support.v7.app.AppCompatActivity;
        import android.os.Bundle;
        import android.view.View;
import android.widget.Button;
import android.widget.EditText;
        import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText editText;
    Button btnTest;  // alt+Enter 하면 오류에 대해 해겳법을 추천해준다.

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        /*
        editText = findViewById(R.id.editText_id); // 객체 불러오기
        btnTest = findViewById(R.id.btn_test);

        btnTest.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                editText.setText("welcome");
            }
        });
        */
    }

}
