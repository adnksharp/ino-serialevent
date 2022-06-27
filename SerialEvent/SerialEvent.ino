bool sRun = true;
String Input = "", Cache = "";

void setup()
{
    Serial.begin(9600);
    Input.reserve(200);
}

void loop()
{
    if (!sRun)
    {
        if (Cache != Input)
            Serial.println(Input);
        Cache = Input;
        Input = "";
        sRun = true;
    }
}

void serialEvent()
{
    while (Serial.available())
    {
        char c = (char)Serial.read();
        if (c == '\n')
        {
            sRun = false;
            break;
        }
        Input += c;
    }
}