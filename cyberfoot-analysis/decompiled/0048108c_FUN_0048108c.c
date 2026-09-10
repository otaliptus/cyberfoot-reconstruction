// Address: 0048108c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048108c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint dwNewLong;
  uint local_10;
  
  local_10 = param_3;
  FUN_0047f88c(param_1);
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    iVar5 = -0x14;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    local_10 = GetWindowLongA(pHVar2,iVar5);
    local_10 = local_10 & 0xffff8fff;
    FUN_00469824(param_1,&local_10);
    iVar5 = -0x14;
    dwNewLong = local_10;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    SetWindowLongA(pHVar2,iVar5,dwNewLong);
  }
  iVar5 = FUN_0042747c(param_1);
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    do {
      uVar3 = FUN_00427450(param_1,iVar4);
      cVar1 = FUN_00403c10(uVar3,PTR_PTR_004759d0);
      if (cVar1 != '\0') {
        FUN_00427450(param_1,iVar4);
        FUN_0047aae4();
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

