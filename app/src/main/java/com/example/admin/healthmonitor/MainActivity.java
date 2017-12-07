package com.example.admin.healthmonitor;

import android.content.DialogInterface;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {
private Button login,signup;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        login = (Button) findViewById(R.id.button3);
        signup = (Button) findViewById(R.id.button4);




        login.setOnClickListener(new View.OnClickListener(){
            public void onClick(View v) {
                // TODO Auto-generated method stub
                Intent intent = new Intent(MainActivity.this,Registration.class);
                startActivity(intent);
                finish();

            }
        });




        signup.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                // TODO Auto-generated method stub
                Intent intent = new Intent(MainActivity.this,Registration.class);
                startActivity(intent);
                finish();
                return;
            }
        });
    }
}
