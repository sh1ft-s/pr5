# pr5

Для подключения функций из библиотеки math 
* Добавить в tasks.json: "-lm" после строчки "${fileDirname}/${fileBasenameNoExtension}"
* Компилировать файлы с флагом "-lm". Например "gcc pw05-*.c -o pw05-* -lm && ./pw05-*"
