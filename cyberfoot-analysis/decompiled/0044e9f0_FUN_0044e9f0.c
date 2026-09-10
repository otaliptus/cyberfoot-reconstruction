// Address: 0044e9f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044e9f0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  HWND pHVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  UINT UVar7;
  WPARAM WVar8;
  LPARAM LVar9;
  
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_00451d64(*(int *)(param_1 + 4),*(undefined1 *)(*(int *)(param_1 + 4) + 0x288));
      iVar2 = FUN_0041edb0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x23c));
      if (-1 < iVar2 + -1) {
        iVar6 = 0;
        do {
          iVar3 = FUN_0044db94(*(undefined4 *)(*(int *)(param_1 + 4) + 0x23c),iVar6);
          if (*(int *)(iVar3 + 0x20) < 0) {
            FUN_0044d9f0(iVar3,*(int *)(iVar3 + 0x20));
            *(undefined4 *)(iVar3 + 0x20) = 0;
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      *(undefined1 *)(param_1 + 0xc) = 1;
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe0;
      LVar9 = 0;
      WVar8 = 1;
      UVar7 = 0xb;
      pHVar5 = (HWND)FUN_0044e8e8(param_1);
      SendMessageA(pHVar5,UVar7,WVar8,LVar9);
      (**(code **)(**(int **)(param_1 + 4) + 0x7c))();
      *in_FS_OFFSET = uVar4;
      *(undefined1 *)(param_1 + 0xc) = 0;
      return;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    *(undefined1 *)(iVar2 + 0x288) = *(undefined1 *)(iVar2 + 0x229);
    FUN_00451d64(iVar2,0);
    iVar2 = FUN_0041edb0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x23c));
    if (-1 < iVar2 + -1) {
      iVar6 = 0;
      do {
        iVar3 = FUN_0044db94(*(undefined4 *)(*(int *)(param_1 + 4) + 0x23c),iVar6);
        if (*(int *)(iVar3 + 0x24) < 0) {
          *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x24);
          uVar4 = FUN_0044d9bc(iVar3);
          *(undefined4 *)(iVar3 + 0x24) = uVar4;
          FUN_0044d864(iVar3);
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    LVar9 = 0;
    WVar8 = 0;
    UVar7 = 0xb;
    pHVar5 = (HWND)FUN_0044e8e8(param_1);
    SendMessageA(pHVar5,UVar7,WVar8,LVar9);
    cVar1 = FUN_00450588(*(undefined4 *)(param_1 + 4));
    if (cVar1 != '\0') {
      cVar1 = FUN_00450594(*(undefined4 *)(param_1 + 4));
      if (cVar1 != '\0') {
        SendMessageA(*(HWND *)(*(int *)(param_1 + 4) + 0x264),0xb,0,0);
      }
    }
  }
  return;
}

