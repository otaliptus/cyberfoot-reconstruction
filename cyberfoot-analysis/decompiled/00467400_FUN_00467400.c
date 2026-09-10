// Address: 00467400
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00467400(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x54))();
  if ((char)iVar2 != '\0') {
    param_1[0x2b] = param_1[0x13];
    param_1[0x2a] = param_1[0x12];
    return param_1[0x12];
  }
  if (param_1[0x28] != 0) {
    if (((char)param_1[0x27] == '\x02') || ((byte)(*(char *)(param_1[0x28] + 0x5b) - 1U) < 2)) {
      iVar2 = param_1[0x13];
      param_1[0x2d] = iVar2;
    }
    else if (((char)param_1[0x27] == '\x01') ||
            (cVar1 = *(char *)(param_1[0x28] + 0x5b),
            iVar2 = CONCAT31((int3)((uint)param_1[0x28] >> 8),cVar1 + -5), (byte)(cVar1 - 3U) < 2))
    {
      iVar2 = param_1[0x12];
      param_1[0x2c] = iVar2;
    }
  }
  return iVar2;
}

