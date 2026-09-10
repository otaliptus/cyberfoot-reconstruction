// Address: 0051a354
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a354(undefined4 param_1,HDC param_2)

{
  undefined1 *puVar1;
  RGBQUAD *prgbq;
  UINT UVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x51a368;
  FUN_0051a088(param_1);
  puStack_14 = (undefined1 *)0x51a372;
  prgbq = (RGBQUAD *)FUN_004027fc(0x400);
  puStack_18 = &LAB_0051a3b7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  UVar2 = GetDIBColorTable(param_2,0,0x100,prgbq);
  FUN_0051a2e0(param_1,prgbq,UVar2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0051a3be;
  puStack_18 = (undefined1 *)0x51a3b6;
  FUN_0040281c(prgbq,uStack_1c,puVar1);
  return;
}

