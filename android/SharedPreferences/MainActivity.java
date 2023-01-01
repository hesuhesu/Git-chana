package com.example.sharedexample;

import android.content.SharedPreferences;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    private EditText et_save;
    String shared = "file";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et_save = (EditText) findViewById(R.id.et_save);

        SharedPreferences sharedPreferences = getSharedPreferences(shared,0); // 0을 입력하면 자동으로 생성됨
        String value = sharedPreferences.getString("restart_android","");
        et_save.setText(value);
    }
    @Override
    protected void onDestroy() {
        super.onDestroy(); // 뒤로가기 누를 때 onDestroy가 호출됨. 단 데이터는 보존하게 설계

        SharedPreferences sharedPreferences = getSharedPreferences(shared,0);
        SharedPreferences.Editor editor = sharedPreferences.edit(); // sharedPreference와 연결.
        String value = et_save.getText().toString();
        editor.putString("restart_android",value);
        editor.commit(); // save를 완료하라.
    }
}
