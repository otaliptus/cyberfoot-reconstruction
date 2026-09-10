// Address: 004785f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004785f0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 ushort param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_24 = *param_3;
  uStack_20 = param_3[1];
  uStack_1c = param_3[2];
  uStack_18 = param_3[3];
  iVar2 = thunk_FUN_0047910c(param_1);
  iVar3 = FUN_00478724(param_1);
  if (((iVar2 == 0) || ((*(char *)(iVar2 + 0x40) == '\0' && (iVar3 == 0)))) ||
     ((*(short *)((int)param_1 + 0x9a) == 0 && (*(short *)((int)param_1 + 0x92) == 0)))) {
    if ((iVar2 == 0) || (cVar1 = FUN_0047a744(iVar2), cVar1 != '\0')) {
      FUN_00477cc8();
    }
    else {
      FUN_004773c0();
    }
  }
  else {
    (**(code **)(*param_1 + 0x34))(param_1,param_2,&local_24,(param_5 & 1) != 0);
    if (*(short *)((int)param_1 + 0x9a) != 0) {
      (*(code *)param_1[0x26])
                (param_1[0x27],param_1,param_2,CONCAT22((short)((uint)&local_24 >> 0x10),param_5),
                 &local_24);
    }
  }
  return;
}

