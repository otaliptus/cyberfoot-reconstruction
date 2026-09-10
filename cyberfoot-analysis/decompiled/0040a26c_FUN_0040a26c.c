// Address: 0040a26c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040a26c(byte param_1,char param_2,undefined4 param_3)

{
  if (param_2 == '\0') {
    FUN_00404928(param_3,(&PTR_DAT_00662160)[param_1]);
  }
  else {
    FUN_0040a0d0();
    if (param_1 == 0) {
      FUN_00404928(param_3,*DAT_0066c790);
      return;
    }
    FUN_00404928(param_3,*DAT_0066c78c);
  }
  return;
}

