// Address: 0044a6dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044a6dc(undefined4 *param_1,WPARAM param_2,int param_3)

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
  LPARAM LVar8;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 local_110;
  undefined1 local_10c [256];
  undefined1 *local_c;
  undefined1 local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_110 = 0;
  puStack_124 = &LAB_0044a80f;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  if (param_3 < (int)param_2) {
    FUN_004039d4(*param_1,local_10c);
    local_c = local_10c;
    local_8 = 4;
    ppuVar7 = &local_c;
    uVar5 = 0;
    FUN_00406d44(PTR_PTR_0066afe8,&local_110);
    FUN_0040e3ac(PTR_DAT_0041b6dc,1,local_110,uVar5,ppuVar7);
    FUN_00404250();
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  if ((*(char *)(param_1 + 0x82) == '\0') &&
     (((((int)param_2 < 0 || (0xffff < (int)param_2)) || (param_3 < 0)) || (0xffff < param_3)))) {
    FUN_0044a458();
  }
  if ((param_2 != param_1[0x83]) || (param_3 != param_1[0x84])) {
    cVar2 = FUN_0046cde4(param_1);
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x82) == '\0') {
        LVar8 = FUN_00408014(param_2,param_3);
        WVar6 = 0;
        UVar4 = 0x401;
        pHVar3 = (HWND)FUN_0046cae0(param_1);
        SendMessageA(pHVar3,UVar4,WVar6,LVar8);
      }
      else {
        UVar4 = 0x406;
        WVar6 = param_2;
        lParam = param_3;
        pHVar3 = (HWND)FUN_0046cae0(param_1);
        SendMessageA(pHVar3,UVar4,WVar6,lParam);
      }
      if ((int)param_2 < (int)param_1[0x83]) {
        LVar8 = 0;
        UVar4 = 0x402;
        WVar6 = param_2;
        pHVar3 = (HWND)FUN_0046cae0(param_1);
        SendMessageA(pHVar3,UVar4,WVar6,LVar8);
      }
    }
    param_1[0x83] = param_2;
    param_1[0x84] = param_3;
  }
  puVar1 = puStack_120;
  *in_FS_OFFSET = uStack_128;
  puStack_120 = &LAB_0044a816;
  puStack_124 = (undefined1 *)0x44a80e;
  FUN_004048d4(&local_110,uStack_128,puVar1);
  return;
}

