// Address: 00449e54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00449e54(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  undefined4 *in_FS_OFFSET;
  UINT UVar4;
  undefined4 uVar5;
  WPARAM WVar6;
  undefined1 **ppuVar7;
  int lParam;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined4 local_114;
  undefined1 local_110 [256];
  undefined1 *local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_114 = 0;
  puStack_128 = &LAB_00449fca;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (param_4 < param_3) {
    FUN_004039d4(*param_1,local_110);
    local_10 = local_110;
    local_c = 4;
    ppuVar7 = &local_10;
    uVar5 = 0;
    FUN_00406d44(PTR_PTR_0066afe8,&local_114);
    FUN_0040e3ac(PTR_DAT_0041b6dc,1,local_114,uVar5,ppuVar7);
    FUN_00404250();
    puVar1 = puStack_124;
  }
  puStack_124 = puVar1;
  if (local_8 < param_3) {
    local_8 = param_3;
  }
  if (param_4 < local_8) {
    local_8 = param_4;
  }
  if (10000 < param_4 - param_3 != 10000 < (int)(param_1[0x88] - param_1[0x87])) {
    param_1[0x87] = param_3;
    param_1[0x88] = param_4;
    FUN_00469fa0(param_1);
  }
  if (param_3 != param_1[0x87]) {
    param_1[0x87] = param_3;
    cVar2 = FUN_0046cde4(param_1);
    if (cVar2 != '\0') {
      WVar6 = 1;
      UVar4 = 0x407;
      pHVar3 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar3,UVar4,WVar6,param_3);
    }
  }
  if (param_4 != param_1[0x88]) {
    param_1[0x88] = param_4;
    cVar2 = FUN_0046cde4(param_1);
    if (cVar2 != '\0') {
      WVar6 = 1;
      UVar4 = 0x408;
      pHVar3 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar3,UVar4,WVar6,param_4);
    }
  }
  if (param_1[0x8a] != local_8) {
    param_1[0x8a] = local_8;
    cVar2 = FUN_0046cde4(param_1);
    if (cVar2 != '\0') {
      WVar6 = 1;
      UVar4 = 0x405;
      lParam = local_8;
      pHVar3 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar3,UVar4,WVar6,lParam);
    }
    FUN_00403c80(param_1);
  }
  puVar1 = puStack_124;
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_00449fd1;
  puStack_128 = (undefined1 *)0x449fc9;
  FUN_004048d4(&local_114,uStack_12c,puVar1);
  return;
}

