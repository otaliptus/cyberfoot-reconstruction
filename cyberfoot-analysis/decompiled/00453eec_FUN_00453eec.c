// Address: 00453eec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453eec(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_004680ec(param_1,param_2,param_3);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar1 != '\0') {
    if (((char)param_3 == '\0') || (*(char *)(param_1 + 0x16a) == '\0')) {
      FUN_00453af8(param_1,*(undefined1 *)(param_2 + 0x69));
    }
    if (((char)param_3 == '\0') || (*(int *)(param_1 + 0x16c) == -1)) {
      FUN_00453b94(param_1,*(undefined4 *)(param_2 + 0x80));
    }
  }
  return;
}

