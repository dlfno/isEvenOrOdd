def main():
    f = open("isEven.js", "w+")

    f.write("""function issEven(number){
    switch(number){
    """)
    
    for i in range(5001):
        f.write(f'        case {i}:\n')
        if (i % 2):
            f.write('            return false;\n')
        else:
            f.write('            return true;\n')
        f.write('            break;\n')
    
    f.write("""           default:
               return "Tired. Figure it out on your own.";
               break;
       }
   }
  module.exports.isEven = isEven;""")

if __name__ =="__main__":
    main()

