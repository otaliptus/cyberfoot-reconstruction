// Address: 0046c3ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0046c3ec(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  byte bVar4;
  LONG aLStackY_181c [1517];
  LONG local_40;
  WINDOWPLACEMENT local_30;
  
  bVar4 = 0;
  if ((((param_2 == *(int *)(param_1 + 0x40)) && (param_3 == *(int *)(param_1 + 0x44))) &&
      (param_5 == *(int *)(param_1 + 0x48))) && (param_4 == *(int *)(param_1 + 0x4c))) {
    return;
  }
  cVar1 = FUN_0046cde4(param_1);
  if ((cVar1 == '\0') || (BVar2 = IsIconic(*(HWND *)(param_1 + 0x180)), BVar2 != 0)) {
    *(int *)(param_1 + 0x40) = param_2;
    *(int *)(param_1 + 0x44) = param_3;
    *(int *)(param_1 + 0x48) = param_5;
    *(int *)(param_1 + 0x4c) = param_4;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      local_30.length = 0x2c;
      GetWindowPlacement(*(HWND *)(param_1 + 0x180),&local_30);
      FUN_00465ba8(param_1,&stack0xffffffc0);
      local_30.rcNormalPosition.left = local_40;
      puVar3 = (undefined4 *)((int)&local_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 0x24);
      *(undefined4 *)((int)&local_30 + (uint)bVar4 * -8 + 0x20) =
           *(undefined4 *)((int)&stack0xffffffc4 + (uint)bVar4 * 0xfffffffe * 4);
      *puVar3 = *(undefined4 *)(&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      puVar3[(uint)bVar4 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
            ((uint)bVar4 * -2 + 1) * 4);
      SetWindowPlacement(*(HWND *)(param_1 + 0x180),&local_30);
    }
  }
  else {
    SetWindowPos(*(HWND *)(param_1 + 0x180),(HWND)0x0,param_2,param_3,param_5,param_4,0x14);
  }
  FUN_0046585c(param_1);
  FUN_00403c80(param_1);
  return;
}

