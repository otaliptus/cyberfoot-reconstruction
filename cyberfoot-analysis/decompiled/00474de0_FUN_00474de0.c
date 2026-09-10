// Address: 00474de0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00474de0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  IStream *pIVar2;
  IStream *pstm;
  HIMAGELIST p_Var3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = (undefined1 *)0x0;
  puStack_28 = (undefined1 *)0x474dff;
  pIVar2 = (IStream *)FUN_00427950(PTR_PTR_0041c298,1,param_2);
  puStack_28 = &LAB_00474e40;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pstm = pIVar2;
  if (pIVar2 != (IStream *)0x0) {
    pstm = pIVar2 + 5;
  }
  puStack_24 = &stack0xfffffffc;
  p_Var3 = ImageList_Read(pstm);
  FUN_00473b94(param_1,p_Var3);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00474e47;
  puStack_28 = (undefined1 *)0x474e3f;
  FUN_00403a84(pIVar2,uStack_2c,puVar1);
  return;
}

