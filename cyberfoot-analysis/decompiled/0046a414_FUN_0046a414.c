// Address: 0046a414
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046a414(int param_1,UINT *param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  HWND pHVar5;
  HWND pHVar6;
  UINT Msg;
  UINT wParam;
  undefined4 uVar7;
  UINT UVar8;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  
  UVar8 = *param_2;
  if ((int)UVar8 < 0x85) {
    if (UVar8 == 0x84) {
      FUN_00467498(param_1,param_2);
      if (param_2[3] != 0xffffffff) {
        return;
      }
      uVar7 = 0;
      FUN_004080cc(param_2[2],local_14);
      FUN_00465d4c(param_1,local_14,local_1c,uVar7);
      iVar4 = FUN_0046a2ec(param_1,local_1c,0,uVar7);
      if (iVar4 == 0) {
        return;
      }
      param_2[3] = 1;
      return;
    }
    if (UVar8 == 7) {
      piVar3 = (int *)FUN_0047e4c0(param_1);
      if ((piVar3 != (int *)0x0) &&
         (cVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3,param_1), cVar1 == '\0')) {
        return;
      }
      goto LAB_0046a567;
    }
    if (UVar8 != 8) {
      if (UVar8 == 0x1f) {
        pHVar5 = (HWND)FUN_0046cae0(param_1);
        pHVar6 = GetCapture();
        if (((pHVar5 == pHVar6) && (DAT_0066305c != 0)) &&
           (param_1 == *(int *)(DAT_0066305c + 0x30))) {
          FUN_004673cc(DAT_0066305c,0x1f,0,0);
        }
      }
      goto LAB_0046a567;
    }
    bVar2 = *(byte *)(param_1 + 0x54) & 0x20;
  }
  else {
    if (8 < UVar8 - 0x100) {
      if ((UVar8 - 0x200 < 0xb) && (cVar1 = FUN_0046a380(param_1,param_2), cVar1 != '\0')) {
        if (param_2[3] != 0) {
          return;
        }
        cVar1 = FUN_0046cde4(param_1);
        if (cVar1 == '\0') {
          return;
        }
        UVar8 = param_2[2];
        wParam = param_2[1];
        Msg = *param_2;
        pHVar5 = (HWND)FUN_0046cae0(param_1);
        DefWindowProcA(pHVar5,Msg,wParam,UVar8);
        return;
      }
      goto LAB_0046a567;
    }
    bVar2 = FUN_00466988(param_1);
  }
  if (bVar2 != 0) {
    return;
  }
LAB_0046a567:
  FUN_00467498(param_1,param_2);
  return;
}

