#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\src\\Spresencia\\presencia.cpp"
int senPres = 11;
int activo;

void setupPresencia (){
    pinMode(senPres, OUTPUT);
}

boolean detecPresencia(){
    activo =  digitalRead(senPres);
    if(activo == HIGH){
        return true;
    }else{
        return false;
    }
}