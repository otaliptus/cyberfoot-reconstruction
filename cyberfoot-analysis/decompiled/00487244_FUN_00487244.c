// Address: 00487244
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00487244(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  HWND hWnd;
  BOOL BVar3;
  undefined3 uVar4;
  uint local_14;
  
  local_14 = param_3 & 0xffffff00;
  iVar2 = param_1;
  if (*(short *)(param_1 + 0x12a) != 0) {
    iVar2 = (**(code **)(param_1 + 0x128))(*(undefined4 *)(param_1 + 300),param_2,&local_14);
  }
  if ((char)local_14 == '\0') {
    if (*(int *)(param_1 + 0x44) != 0) {
      hWnd = (HWND)FUN_0046cae0(*(int *)(param_1 + 0x44));
      BVar3 = IsWindowEnabled(hWnd);
      if (BVar3 != 0) {
        iVar2 = FUN_00403c80(*(undefined4 *)(param_1 + 0x44),param_2);
        if ((char)iVar2 != '\0') goto LAB_0048729f;
      }
    }
    uVar1 = 0;
    uVar4 = 0;
  }
  else {
LAB_0048729f:
    uVar4 = (undefined3)((uint)iVar2 >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar4,uVar1);
}

