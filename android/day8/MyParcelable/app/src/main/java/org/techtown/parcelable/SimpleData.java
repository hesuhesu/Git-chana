package org.techtown.parcelable;

import android.os.Parcel;
import android.os.Parcelable;

import androidx.annotation.NonNull;

public class SimpleData implements Parcelable {
    int code;
    String message;

    public SimpleData(int code, String message){
        this.code = code;
        this.message = message;
    }

    public SimpleData(Parcel src){
        code = src.readInt();
        message = src.readString();

    }
    public static final Parcelable.Creator CREATOR = new Parcelable.Creator(){
        @Override
        public Object createFromParcel(Parcel source) {
            return new SimpleData(source);
        }

        public SimpleData[] newArray(int size){
            return new SimpleData[size];
        }
    };

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(@NonNull Parcel dest, int flags) {
        dest.writeInt(code);
        dest.writeString(message);
    }
}
