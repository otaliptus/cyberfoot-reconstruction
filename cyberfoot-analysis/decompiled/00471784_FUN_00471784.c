// Address: 00471784
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00471784(undefined4 param_1,char param_2)

{
  int iVar1;
  
  if ((PTR_DAT_0066b7ac[0xc] != '\0') && (param_2 != '\x03')) {
    if (param_2 == '\0') {
      FUN_00471768(param_1,0);
    }
    else {
      FUN_00471768(param_1,1);
      if (DAT_006630c8 != 0) {
        iVar1 = (*DAT_0066cbac)();
        if (iVar1 != 0) {
          (*DAT_0066cbb4)();
          if (param_2 == '\x01') {
            (*DAT_0066cbbc)();
          }
          else if (param_2 == '\x02') {
            (*DAT_0066cbbc)();
          }
          else {
            (*DAT_0066cbbc)();
            (*DAT_0066cbb4)();
          }
          (*DAT_0066cbb8)();
          (*DAT_0066cbb0)();
        }
      }
    }
  }
  return;
}

