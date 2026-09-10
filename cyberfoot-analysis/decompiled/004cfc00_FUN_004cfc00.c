// Address: 004cfc00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cfc00(int *param_1)

{
  char cVar1;
  
  if ((char)param_1[0xb0] != '\0') {
    *(undefined1 *)((int)param_1 + 0x2c2) = 1;
    (**(code **)(*param_1 + 0x80))();
    if (((param_1[0xc] != 0) && ((*(byte *)(param_1 + 7) & 0x10) == 0)) &&
       ((*(byte *)(param_1 + 7) & 1) == 0)) {
      cVar1 = FUN_0046cde4(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 200))();
      }
    }
    *(undefined1 *)((int)param_1 + 0x2c2) = 0;
    return;
  }
  (**(code **)(*param_1 + 0x7c))();
  return;
}

