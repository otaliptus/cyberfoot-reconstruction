// Address: 005118f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005118f0(int param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  HWND pHVar2;
  undefined4 *puVar3;
  byte bVar4;
  LONG aLStackY_1818 [1524];
  LONG *pLVar5;
  RECT *pRVar6;
  BOOL bErase;
  RECT local_3c;
  LONG local_2c;
  undefined4 auStack_28 [3];
  undefined1 local_1c [8];
  undefined4 local_14;
  
  bVar4 = 0;
  cVar1 = FUN_00512d08(param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_00432488(param_2,*(undefined4 *)(param_1 + 0x4d8),*(undefined4 *)(param_1 + 0x4ec));
    if (cVar1 != '\0') {
      FUN_0050f590(param_1,param_2,&local_3c);
      pLVar5 = &local_2c;
      FUN_0050f004(param_1,local_1c);
      FUN_0040709c(0,local_3c.top,local_14,pLVar5,local_3c.bottom);
      pRVar6 = &local_3c;
      local_3c.left = local_2c;
      puVar3 = (undefined4 *)((int)&local_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      *(undefined4 *)((int)&local_3c + (uint)bVar4 * -8 + 4) = auStack_28[(uint)bVar4 * -2];
      *puVar3 = auStack_28[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      puVar3[(uint)bVar4 * -2 + 1] =
           (auStack_28 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
      bErase = 0;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      InvalidateRect(pHVar2,pRVar6,bErase);
      if (param_3 != '\0') {
        InflateRect(&local_3c,-1,-1);
        pRVar6 = &local_3c;
        pHVar2 = (HWND)FUN_0046cae0(param_1);
        ValidateRect(pHVar2,pRVar6);
      }
    }
  }
  return;
}

