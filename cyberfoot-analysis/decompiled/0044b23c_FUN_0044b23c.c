// Address: 0044b23c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044b23c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00444e04);
  if (cVar1 == '\0') {
    FUN_0041e66c(param_1,param_2);
  }
  else {
    uVar2 = FUN_0044afd8(param_2);
    FUN_0044aff4(param_1,uVar2);
    uVar2 = FUN_0044b0ac(param_2);
    FUN_0044b0cc(param_1,uVar2);
    uVar2 = FUN_0044b108(param_2);
    FUN_0044b128(param_1,uVar2);
    uVar2 = FUN_0044b164(param_2);
    FUN_0044b184(param_1,uVar2);
    uVar2 = FUN_0044b030(param_2);
    FUN_0044b048(param_1,uVar2);
    iVar3 = 0;
    do {
      uVar2 = FUN_0044b1c0(param_2,iVar3);
      FUN_0044b1e8(param_1,iVar3,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x20);
  }
  return;
}

