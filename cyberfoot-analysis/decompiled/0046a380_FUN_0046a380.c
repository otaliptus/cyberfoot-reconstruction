// Address: 0046a380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0046a380(int param_1,undefined4 *param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  int iVar3;
  undefined4 uVar4;
  int local_1c;
  int local_18;
  undefined1 local_14 [8];
  
  pHVar1 = (HWND)FUN_0046cae0(param_1);
  pHVar2 = GetCapture();
  if (pHVar1 == pHVar2) {
    if ((DAT_0066305c == 0) || (iVar3 = DAT_0066305c, param_1 != *(int *)(DAT_0066305c + 0x30))) {
      iVar3 = 0;
    }
  }
  else {
    uVar4 = 0;
    FUN_004080cc(param_2[2],local_14);
    iVar3 = FUN_0046a2ec(param_1,local_14,0,uVar4);
  }
  if (iVar3 != 0) {
    local_1c = (int)*(short *)(param_2 + 2) - *(int *)(iVar3 + 0x40);
    local_18 = (int)*(short *)((int)param_2 + 10) - *(int *)(iVar3 + 0x44);
    uVar4 = FUN_004080e0(&local_1c);
    uVar4 = FUN_004673cc(iVar3,*param_2,param_2[1],uVar4);
    param_2[3] = uVar4;
  }
  return iVar3 != 0;
}

