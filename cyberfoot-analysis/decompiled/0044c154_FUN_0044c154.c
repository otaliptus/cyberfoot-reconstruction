// Address: 0044c154
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044c154(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  undefined4 *in_FS_OFFSET;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  undefined1 *puVar7;
  undefined1 local_a;
  undefined1 local_9;
  int local_8;
  
  puVar7 = &stack0xfffffffc;
  local_8 = param_1;
  uVar1 = FUN_0045bf20(param_1);
  FUN_0045c3c8(local_8);
  if ((PTR_DAT_0066b7ac[0xc] != '\0') && (*(int *)(PTR_DAT_0066b7ac + 4) != 0x11)) {
    uVar2 = FUN_00431d74();
    FUN_0042a6d0(*(undefined4 *)(local_8 + 0x68),uVar2);
  }
  LVar6 = 0x2c0001;
  WVar5 = 0;
  UVar4 = 0x445;
  pHVar3 = (HWND)FUN_0046cae0(local_8);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = FUN_00429e64(*(undefined4 *)(local_8 + 0x70));
  WVar5 = 0;
  UVar4 = 0x443;
  pHVar3 = (HWND)FUN_0046cae0(local_8);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  if (*(int *)(local_8 + 0x24c) != 0) {
    local_9 = FUN_0044c690(local_8);
    FUN_00420b00(*(undefined4 *)(local_8 + 0x24c),&local_a,1);
    FUN_0044c69c(local_8,local_a);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe8;
    (**(code **)(**(int **)(local_8 + 0x248) + 0x6c))
              (*(int **)(local_8 + 0x248),*(undefined4 *)(local_8 + 0x24c));
    FUN_00403a84(*(undefined4 *)(local_8 + 0x24c));
    *(undefined4 *)(local_8 + 0x24c) = 0;
    *in_FS_OFFSET = uVar2;
    FUN_0044c69c(local_8,local_9,puVar7);
    return;
  }
  FUN_0045bf58(local_8,uVar1);
  return;
}

