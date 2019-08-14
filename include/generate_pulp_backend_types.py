import itertools

def printTemplate(e, m, type):
    if type=="double": print("#ifdef RISCV64")
    print("template <>");
    print("struct BackendType<%d,%d> {" % (e, m));
    print("    typedef %s FloatType;" % (type));
    print("};");
    if type=="double": print("#endif")
    print("\n");

print("#pragma once\n\n");

print("template <uint_fast8_t exp_bits, uint_fast8_t frac_bits>");
print("struct BackendType {");
print("  // Default: no type");
print("};\n\n");

for elem in itertools.product(range(1,12),range(1,53)):
  if elem[0] <= 5 and elem[1]<=2:
      printTemplate(elem[0], elem[1], "float16")
  elif elem[0] <= 5 and elem[1]<=10:
      printTemplate(elem[0], elem[1], "float16")
  elif elem[0] <= 8 and elem[1]<=7:
      printTemplate(elem[0], elem[1], "float16alt")
  elif elem[0] <= 8 and elem[1]<=23:
      printTemplate(elem[0], elem[1], "float")
  elif elem[0] <= 11 and elem[1]<=52:
      printTemplate(elem[0], elem[1], "double")
