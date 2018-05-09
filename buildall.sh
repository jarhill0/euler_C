mkdir -p bin

shopt -s nullglob
for file in src/*.c
do
    filename=$(basename -- "$file")
    number="${filename%.*}"
    gcc -o "bin/$number" "$file"
done 
shopt -u nullglob #revert nullglob back to its normal default state

