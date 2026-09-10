// Address: 004cdfd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cdfd4(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 extraout_EDX;
  
  if (((*(char *)((int)param_1 + 0x23f) != '\0') ||
      (cVar1 = (**(code **)(*param_1 + 0xdc))(), param_2 = extraout_EDX, cVar1 == '\0')) &&
     ((*(char *)((int)param_1 + 0x23f) == '\0' ||
      (((*(char *)((int)param_1 + 0x236) == '\x01' || (0 < param_1[0x8e])) ||
       ((char)param_1[0x90] != '\0')))))) {
    if (*(char *)((int)param_1 + 0x236) == '\x01') {
      FUN_004cfa08(param_1,CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)((int)param_1 + 0x233)
                                   ) ^ 1);
    }
    if (*(char *)((int)param_1 + 0x236) == '\x01') {
      *(undefined1 *)(param_1 + 0x8c) = 2;
      (**(code **)(*param_1 + 0x80))();
    }
    FUN_00403c80(param_1);
    return;
  }
  if (param_1[0x91] == 0) {
    FUN_00403c80(param_1);
  }
  else {
    FUN_004cda8c(param_1);
  }
  return;
}

