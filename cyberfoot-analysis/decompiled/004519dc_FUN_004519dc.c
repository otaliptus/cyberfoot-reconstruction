// Address: 004519dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004519dc(int *param_1,int *param_2)

{
  char cVar1;
  
  if ((((*(byte *)(param_1 + 7) & 0x10) == 0) &&
      (((*param_2 == 0x201 || (*param_2 == 0x203)) && (cVar1 = FUN_00466988(param_1), cVar1 == '\0')
       ))) && (*(char *)((int)param_1 + 0x5d) == '\x01')) {
    cVar1 = FUN_0046a380(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    *(ushort *)(param_1 + 0x15) = DAT_00451a58 | *(ushort *)(param_1 + 0x15);
    (**(code **)(*param_1 + -0x14))(param_1,param_2);
    return;
  }
  if (((*param_2 != 0xf) && (*param_2 != 0x14)) || (*(char *)(param_1[0x8b] + 0xc) == '\0')) {
    FUN_0046a414(param_1,param_2);
  }
  return;
}

