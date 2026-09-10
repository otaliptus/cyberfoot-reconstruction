// Address: 00519638
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00519638(undefined4 param_1,int *param_2,byte param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6,undefined4 param_7,byte param_8,byte param_9)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 uVar4;
  
  if (*param_2 == 0) {
    iVar1 = FUN_0051944c(PTR_DAT_00519398,1,param_6,param_4,param_5,param_7);
    *param_2 = iVar1;
  }
  if (*(char *)(*param_2 + 4) == '\0') {
    bVar2 = (byte)(7 - param_6);
    uVar3 = (uint)(byte)(((&DAT_00669d10)[param_6] & param_3) >> (bVar2 & 0x1f)) << 2 |
            (uint)(byte)(((&DAT_00669d10)[param_6] & param_9) >> (bVar2 & 0x1f)) * 2;
    uVar4 = (undefined3)(uVar3 >> 8);
    FUN_00519638(param_1,*param_2 + 0x1c +
                         (uVar3 | (byte)(((&DAT_00669d10)[param_6] & param_8) >> (bVar2 & 0x1f))) *
                         4,CONCAT31((int3)((uint)(7 - param_6) >> 8),param_3),param_4,param_5,
                 param_6 + 1,param_7,CONCAT31(uVar4,param_8),CONCAT31(uVar4,param_9));
  }
  else {
    *(int *)(*param_2 + 8) = *(int *)(*param_2 + 8) + 1;
    *(int *)(*param_2 + 0xc) = *(int *)(*param_2 + 0xc) + (uint)param_3;
    *(int *)(*param_2 + 0x10) = *(int *)(*param_2 + 0x10) + (uint)param_9;
    *(int *)(*param_2 + 0x14) = *(int *)(*param_2 + 0x14) + (uint)param_8;
  }
  return;
}

