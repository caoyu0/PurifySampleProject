SET( DEFINE
	EXAMPLE_MACRO
	)
SET( INCLUDE
	PublicDLL
	)
SET( LINK
	PublicDLL
	)

create_project(CONSOLE "${DEFINE}" "${INCLUDE}" "${LINK}")
