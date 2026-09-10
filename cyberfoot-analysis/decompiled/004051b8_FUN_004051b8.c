// Address: 004051b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004051b8(undefined4 param_1,short *param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  bool bVar3;
  
  bVar3 = true;
  uVar1 = param_3;
  psVar2 = param_2;
  do {
    if (uVar1 == 0) break;
    uVar1 = uVar1 - 1;
    bVar3 = *psVar2 == 0;
    psVar2 = psVar2 + 1;
  } while (!bVar3);
  if (bVar3) {
    uVar1 = ~uVar1;
  }
  FUN_004050e4(param_1,param_2,uVar1 + param_3);
  return;
}

