// Address: 0054d420
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0054d420(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0054d28c(param_1);
  if (((char)param_2 == '\x02') && (*(byte *)(iVar1 + 0x20) < 3)) {
    param_2 = 0;
  }
  iVar2 = *(int *)(iVar1 + 0xc + (param_2 & 0x7f) * 4);
  if (iVar2 == -1) {
    FUN_0054d358(param_1);
    iVar2 = *(int *)(iVar1 + 0xc + (param_2 & 0x7f) * 4);
  }
  return iVar2;
}

