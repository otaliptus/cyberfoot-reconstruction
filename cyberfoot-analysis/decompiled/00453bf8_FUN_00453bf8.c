// Address: 00453bf8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453bf8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((char)param_2 != *(char *)(param_1 + 0x171)) {
    *(char *)(param_1 + 0x171) = (char)param_2;
    iVar1 = *(int *)(param_1 + 0x184);
    if (iVar1 != 0) {
      uVar2 = param_2 & 0xff;
      uVar3 = FUN_00453dec(param_1,param_2,param_3,uVar2);
      FUN_004673cc(iVar1,0x406,uVar3,uVar2);
    }
  }
  return;
}

