// Address: 005f9dc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f9dc8(undefined4 param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0x1b;
  puVar1 = PTR_DAT_0066ae98 + 0x52e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x568;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_005f9f2c(param_1);
  FUN_00656410();
  FUN_005f92d8(param_1);
  if (8 < *(int *)PTR_DAT_0066b080) {
    iVar3 = 0x1b;
    pcVar2 = PTR_DAT_0066ae98 + 0x52d;
    do {
      if ((*pcVar2 != '\0') && (pcVar2[2] == '\0')) break;
      pcVar2 = pcVar2 + 0x568;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_005f92d8(param_1);
  if (DAT_006d3f40 == '\0') {
    FUN_005f9bcc(param_1);
    return;
  }
  FUN_005f99c4(param_1);
  return;
}

